//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet;

@interface IFBlockedUserListService : NSObject
{
    NSSet *_ids;
}

+ (void)clear;
+ (void)syncWithCompletion:(CDUnknownBlockType)arg1;
+ (_Bool)isUserBlockedByID:(id)arg1;
+ (id)instance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSSet *ids; // @synthesize ids=_ids;

@end

