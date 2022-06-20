
#define FILA_H

template <class Item>
class Fila
{
    private:
        Item * v;
        int inicio;
        int fim;
        int tam;
        void resize(int tam);

    public: 
        void add(Item item);
        bool isEmpty();
        int size();
        Item remove();
        Item first();
};

template<class Item>
Fila<Item>::Fila(): inicio(0), fim(0), tam(1), v(new Item[1]) {};

template <class Item>
Fila<Item>::~Fila() {
  if (v != nullptr)
    delete [] v;
}

template<class Item>
void Fila<item>::add(Item item)
{
    resize(2 * tam);
    v[fim+1] = i;
    fim++;
}

template<class Item>
void Fila<item>::remove(int i)
{
    delete(v[i]);
    for(i = 0;i<fim;i++)
        v[i] = v[i+1]
    fim--;
}

template<class Item>
Item Fila<item>::first()
{
    return(v[inicio]);
}

template<class Item>
bool Fila<item>::isEmpty()
{
    if(inicio == fim)
        return true;
    else
        return false;
}

template<class Item>
int Fila<item>::size()
{
    return (fim - inicio);
}

template <class Item>
void Fila<Item>::resize(int t) {
  Item * novoV = new Item[t];
  for (int i = 0; i < n; i++)
    novoV[i] = v[i];
  delete [] v;
  v = novoV;
  tam = t;
}