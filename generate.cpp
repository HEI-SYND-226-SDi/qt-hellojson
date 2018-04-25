#include <QtCore>

int main(int, char**) {
    QJsonObject book1;
    book1["id"] = "978-1423103349";
    book1["author"] = "Rick Riordan";
    book1["title"] = "The Sea of Monsters";

    QJsonObject book2({
                          {"id", "978-0641723445"},
                          {"author", "Rick Riordan"},
                          {"title", "The Lightning Thief"}
                      });

    QJsonArray books({book1, book2});
    books.append(QJsonObject({
                                 {"id", "978-1857995879"},
                                 {"author", "Jostein Gaarder"},
                                 {"title", "Sophie's World : The Greek Philosophers"}
                             }));

    QJsonDocument json(books);
    qDebug() << json.toJson(QJsonDocument::Indented).data();
}