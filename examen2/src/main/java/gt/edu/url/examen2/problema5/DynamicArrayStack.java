package gt.edu.url.examen2.problema5;

import java.util.Arrays;
/**
 * Clase que representa un arreglo dinámico con la disciplina de una Pila
 * @author FRAN
 *
 * @param <E>
 */
public class DynamicArrayStack<E> implements Stack<E> {
	
	public static final int capacidad = 16;
	private E[] storage;
	private int t = 0;
	
	public DynamicArrayStack()
	{
		storage = (E[]) new Object[capacidad];
	}
	
	@Override
	/**
	 * retorna el tamaño del arreglo
	 */
	public int size() {
		
		return t;
	}

	@Override
	/**
	 * Indica si el arreglo está o no vacio
	 */
	public boolean isEmpty() {
		
		return (t==0);
	}

	@Override
	/**
	 * Ingresa un elemento en el arreglo
	 */
	public void push(E e) {
		if(t == storage.length) {
			Resize(2*t);
		}
		storage[t] = e;
		t++;
	}

	@Override
	/**
	 * Muestra el elemento que se encuentra hasta arriba en la pila
	 */
	public E top() {
		
		return storage[t-1];
	}

	@Override
	/**
	 * Extrae de la pila el elemento que se encuentra hasta arriba
	 */
	public E pop() {
		if (isEmpty()) {
		return null;
		}
		else {
			E result = storage[t];
			storage[t] = null;
			t--;
			return result;
		}
	}
	/**
	 * En caso el arreglo esté lleno se crea un arreglo más grande para seguir almacenando datos
	 * @param size
	 */
	protected void Resize(int size) {
		E[] temp = (E[])new Object [size];
		for(int i = 0; i <t; i++) {
			temp[i] = storage[i];
		}
		storage = temp;
	}

	@Override
	/**
	 * Muestra en forma de string los elementos del arreglo
	 */
	public String toString() {
		return "DynamicArrayStack [storage=" + Arrays.toString(storage) + "]";
	}
	


}
