//
//  Team+CoreDataProperties.h
//  Demo8_Team&Players
//
//  Created by  江苏 on 16/3/12.
//  Copyright © 2016年 jiangsu. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "Team.h"

NS_ASSUME_NONNULL_BEGIN

@interface Team (CoreDataProperties)

@property (nullable, nonatomic, retain) NSString *name;
@property (nullable, nonatomic, retain) NSSet<Players *> *players;

@end

@interface Team (CoreDataGeneratedAccessors)

- (void)addPlayersObject:(Players *)value;
- (void)removePlayersObject:(Players *)value;
- (void)addPlayers:(NSSet<Players *> *)values;
- (void)removePlayers:(NSSet<Players *> *)values;

@end

NS_ASSUME_NONNULL_END
