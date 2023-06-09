package net.braniumacademy.controller.sort;

import java.util.Comparator;
import net.braniumacademy.model.Subject;

/**
 *
 * @author T3D Computer
 */
public class SortSubjectByNameDESC implements Comparator<Subject> {

    @Override
    public int compare(Subject o1, Subject o2) {
        return o2.getName().compareTo(o1.getName());
    }
    
}