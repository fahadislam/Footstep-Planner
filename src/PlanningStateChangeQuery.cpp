/*
 * A footstep planner for humanoid robots
 *
 * Copyright 2010-2011 Johannes Garimort, Armin Hornung, University of Freiburg
 * http://www.ros.org/wiki/footstep_planner
 *
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, version 3.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <footstep_planner/PlanningStateChangeQuery.h>


namespace footstep_planner
{
PlanningStateChangeQuery::PlanningStateChangeQuery(
    const std::vector<int>& neighbors)
: ivNeighbors(neighbors)
{}


PlanningStateChangeQuery::~PlanningStateChangeQuery()
{}


const std::vector<int>*
PlanningStateChangeQuery::getPredecessors() const
{
  return &ivNeighbors;
}


const std::vector<int>*
PlanningStateChangeQuery::getSuccessors() const
{
  return &ivNeighbors;
}
}
