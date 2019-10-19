//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface DeNAWPCommand : NSObject
{
    NSDictionary *params;
    NSString *callerGameObjName;
}

+ (void)initialize;
+ (id)DEFAULT_ERROR;
+ (id)DEFAULT_SUCCESS;
@property(copy, nonatomic) NSString *callerGameObjName; // @synthesize callerGameObjName;
@property(copy, nonatomic) NSDictionary *params; // @synthesize params;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)sendMessage:(id)arg1 withDict:(id)arg2;
- (void)sendMessage:(id)arg1 withNSString:(id)arg2;
- (void)sendMessage:(id)arg1;
- (_Bool)hasParam:(id)arg1;
- (_Bool)isTrue:(id)arg1;
- (_Bool)callMethod:(id)arg1;
- (void)removeCreatedObj;
- (id)getCreatedObj;
- (void)putCreatedObjWithId:(id)arg1;
- (id)post;
- (id)execute;

@end

