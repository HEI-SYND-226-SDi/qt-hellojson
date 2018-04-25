#include <QtCore>

int main(int, char**) {
    QFile jsonFile("books.json");
    jsonFile.open(QIODevice::ReadOnly);
    auto jsonData = jsonFile.readAll();
    auto json = QJsonDocument::fromJson(jsonData);
    if (json.isArray()) {
        auto array = json.array();
        for (auto value: array) {
            if (value.isObject()) {
                auto object = value.toObject();
                auto title = object["title"];
                if (title.isString()) {
                    qDebug() << title.toString();
                }
            }
        }
    }
}
