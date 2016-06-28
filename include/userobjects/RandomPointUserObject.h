/****************************************************************/
/*               DO NOT MODIFY THIS HEADER                      */
/* MOOSE - Multiphysics Object Oriented Simulation Environment  */
/*                                                              */
/*           (c) 2010 Battelle Energy Alliance, LLC             */
/*                   ALL RIGHTS RESERVED                        */
/*                                                              */
/*          Prepared by Battelle Energy Alliance, LLC           */
/*            Under Contract No. DE-AC07-05ID14517              */
/*            With the U. S. Department of Energy               */
/*                                                              */
/*            See COPYRIGHT for full restrictions               */
/****************************************************************/


#ifndef RANDOMPOINTUSEROBJECT_H
#define RANDOMPOINTUSEROBJECT_H

#include "GeneralUserObject.h"
#include "MooseMesh.h"
#include "RandomInterface.h"

//Forward Declarations
class RandomPointUserObject;

template<>
InputParameters validParams<RandomPointUserObject>();

class RandomPointUserObject :
  public GeneralUserObject,
  public RandomInterface
{
public:
  RandomPointUserObject(const InputParameters & parameters);

  virtual ~RandomPointUserObject() {}

  /**
   * Returns a Point located randomly on mesh
   */
  Point getRandomPoint() const;

  virtual void initialize(){} // not used

  virtual void execute(){}  // not used

  virtual void finalize(){}  //not used

protected:
  MooseMesh & _mesh;

};

#endif
