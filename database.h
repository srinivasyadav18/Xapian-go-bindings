#ifndef DATABASE_H
#define DATABASE_H
namespace Gsoc{
    class Database{
        private:
            int id;
        public:
            Database();
            ~Database();
            void printId();
            int getId();
            void setId(int);
        };
   void database_func();
}
#endif
