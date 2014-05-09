#ifndef UNITS_2D_H
#define UNITS_2D_H

struct Units
{
	/// physical units corresponding to one LB unit
  double dx;
  double dt;
  double dm;
  double rho;
  double vis;
  double u;
  
  /// LB parameters
  double omega;
  double tau;
  double nu;
  double Re;
  double u_lb;

public:
  Units();
  Units(const double dx_, const double tau_, const double rho_, const double vis_, const double u_);
  void setParameters(const std::string filename);
  void calculateLBPara();
  inline const double getdX(){return dx;}
  inline const double getdM(){return dm;}
  inline const double getdT(){return dt;}
  inline const double getRe(){return Re;}
  inline const double getUlb(){return u_lb;}
  inline const double getdRho(){return rho;}


};
#endif
