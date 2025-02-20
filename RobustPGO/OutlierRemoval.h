/* 
Outlier removal class 
Provide a set of outlier removal methods 
along with interface to robustPGO
author: Yun Chang
*/

#ifndef OUTLIERREMOVAL_H
#define OUTLIERREMOVAL_H

class OutlierRemoval {
public:
	virtual bool process(gtsam::NonlinearFactorGraph new_factors, 
				               gtsam::Values new_values,
				               gtsam::NonlinearFactorGraph& nfg, 
				               gtsam::Values& values){};
};

#endif