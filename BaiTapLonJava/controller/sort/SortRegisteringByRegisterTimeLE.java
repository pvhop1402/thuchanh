package net.braniumacademy.controller.sort;

import java.util.Comparator;
import net.braniumacademy.model.Registering;

/**
 *
 * @author T3D Computer
 */
public class SortRegisteringByRegisterTimeLE implements Comparator<Registering> {

    @Override
    public int compare(Registering o1, Registering o2) {
        return (int) (o2.getRegistedDate().getTime()
                - o1.getRegistedDate().getTime());
    }

}
