#ifndef FILEANALYZEWINDOW_H
#define FILEANALYZEWINDOW_H

#include <QDialog>
#include <QLabel>
#include <QDragEnterEvent>
//#include <QUrl>
#include <QMimeData>
#include "ElfAnalyze.h"
#include <QtWidgets\qtabwidget.h>
namespace Ui {
class FileAnalyzeWindow;
}

class FileAnalyzeWindow : public QDialog
{
    Q_OBJECT

public:
    explicit FileAnalyzeWindow(QWidget *parent = nullptr);
    ~FileAnalyzeWindow();
	Ui::FileAnalyzeWindow* getFileAnalyzeWindow();

private slots:
    void on_FileRepair_clicked();
    void on_label_windowIconChanged(const QIcon &icon);
    void on_select_file_clicked();
	void on_txt_status_change(QString txt);

protected:
    void dragEnterEvent(QDragEnterEvent *event) override;
    void dragMoveEvent(QDragMoveEvent *event) override;
    void dragLeaveEvent(QDragLeaveEvent *event) override;
    void dropEvent(QDropEvent *event) override;
private:
    Ui::FileAnalyzeWindow *ui;
	QTabWidget* m_fileAnalyzeShowPlace;
private:
    QLabel *label;

	//my space 
private:
	ElfAnalyze* m_elfAnalyze;
	void debugTestFunc();

};

#endif // FILEANALYZEWINDOW_H
