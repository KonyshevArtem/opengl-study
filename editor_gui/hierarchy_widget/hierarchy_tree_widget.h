#ifndef OPENGL_STUDY_HIERARCHYTREEWIDGET_H
#define OPENGL_STUDY_HIERARCHYTREEWIDGET_H

#include <QTreeWidget>
#include <memory>

class QFocusEvent;
class QDropEvent;
class QPaintEvent;
class QKeyEvent;
class QPoint;
class GameObject;
class HierarchyTreeWidgetItem;

class HierarchyTreeWidget: public QTreeWidget
{
    Q_OBJECT

public:
    HierarchyTreeWidget();

protected:
    void focusInEvent(QFocusEvent *_event);
    void dropEvent(QDropEvent *_event);
    void paintEvent(QPaintEvent *_event);
    void keyPressEvent(QKeyEvent *_event);

private:
    void Update();

    void TraverseHierarchy(
            HierarchyTreeWidgetItem                              *_widget,
            const std::function<void(HierarchyTreeWidgetItem *)> &_callback);

    void CreateHierarchy(HierarchyTreeWidgetItem *_widget);

    std::vector<std::shared_ptr<GameObject>> GetSelectedGameObjects();

public slots:
    void PrepareMenu(const QPoint &_pos);
    void DestroyGameObjects(const std::vector<std::shared_ptr<GameObject>> &_gameObjects);
};

#endif
