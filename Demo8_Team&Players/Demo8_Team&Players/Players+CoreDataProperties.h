//
//  Players+CoreDataProperties.h
//  Demo8_Team&Players
//
//  Created by  江苏 on 16/3/12.
//  Copyright © 2016年 jiangsu. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "Players.h"

NS_ASSUME_NONNULL_BEGIN

@interface Players (CoreDataProperties)

@property (nullable, nonatomic, retain) NSString *name;
@property (nullable, nonatomic, retain) NSManagedObject *team;

@end

NS_ASSUME_NONNULL_END
