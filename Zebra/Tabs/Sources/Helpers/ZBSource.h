//
//  ZBSource.h
//  Zebra
//
//  Created by Wilson Styres on 11/30/18.
//  Copyright © 2018 Wilson Styres. All rights reserved.
//

#import "ZBBaseSource.h"

#import <Foundation/Foundation.h>
#import <sqlite3.h>

NS_ASSUME_NONNULL_BEGIN

@interface ZBSource : ZBBaseSource
@property (nonatomic) NSString *sourceDescription;
@property (nonatomic) NSString *origin;
@property (nonatomic) NSString *label;
@property (nonatomic) NSString *version;
@property (nonatomic) NSString *suite;
@property (nonatomic) NSString *codename;
@property (nonatomic) NSArray <NSString *> *architectures;
@property (nonatomic) NSString *baseFilename;
@property (nonatomic) int repoID;

@property (nonatomic) BOOL supportSileoPay;
@property (nonatomic, strong) NSString *shortURL;
@property (nonatomic) BOOL supportsFeaturedPackages;
@property (nonatomic) BOOL checkedSupportFeaturedPackages;
@property (nonatomic) NSURL *iconURL;

+ (ZBSource *)repoMatchingRepoID:(int)repoID;
+ (ZBSource *)localRepo:(int)repoID;
+ (ZBSource *)repoFromBaseURL:(NSString *)baseURL;
+ (BOOL)exists:(NSString *)urlString;
- (id)initWithSQLiteStatement:(sqlite3_stmt *)statement;
- (BOOL)canDelete;
@end

NS_ASSUME_NONNULL_END