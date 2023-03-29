/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package bai2;

import java.util.Scanner;

/**
 *
 * @author T3D Computer
 */
public class DoanhNghiep {
    private String tenDN;
    private String soDT;
    private String diachi;

    public void nhap(){
        Scanner sc = new Scanner(System.in);
        System.out.print("Nhap ten doanh nghiep:");
        tenDN=sc.nextLine();
        System.out.println("Nhap so dien thoai: ");
        soDT = sc.nextLine();
        System.out.println("Nhap dia chi: ");
        diachi = sc.nextLine();
    }
    public void setDiachi(String diachi) {
        this.diachi = diachi;
    }

    @Override
    public String toString() {
        return "DoanhNghiep{" + "tenDN=" + tenDN + ", soDT=" + soDT + 
                ", diachi=" + diachi + '}';
    }
    
}
