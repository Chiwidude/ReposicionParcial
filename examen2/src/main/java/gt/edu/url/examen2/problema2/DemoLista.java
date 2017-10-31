package gt.edu.url.examen2.problema2;
import gt.edu.url.examen2.problema2.List;
import gt.edu.url.examen2.problema2.ArrayList;
/**
 * Clase que implementa el método de la interfaz DemoList
 * @author FRAN
 *
 */
public class DemoLista implements DemoList {
	List<Integer> Lalista = new ArrayList<>();
	@Override
	/**
	 * Método que retorna una lista con los elementos ingresados
	 */
	public List<Integer> crearDemoLista() {
		Lalista.add(0, 4);
		Lalista.add(0, 3);
		Lalista.add(0, 2);
		Lalista.add(2, 1);
		Lalista.add(1, 5);
		Lalista.add(1, 6);
		Lalista.add(3, 7);
		Lalista.add(0, 8);
			
		return Lalista;
		
	}
	

}

