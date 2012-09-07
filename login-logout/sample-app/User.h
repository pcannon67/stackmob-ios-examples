//
//  User.h
//  login-logout
//
//  Created by Sidney Maestre on 9/5/12.
//  Copyright (c) 2012 Sidney Maestre. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>
#import "SMModel.h"


@interface User : NSManagedObject <SMModel>

@property (nonatomic, retain) NSString * username;
@property (nonatomic, retain) NSString * password;

+ (NSString *)primaryKeyFieldName;

@end
