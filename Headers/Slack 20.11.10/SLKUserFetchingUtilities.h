//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SLKUserFetchingUtilities : NSObject
{
}

+ (id)predicateForAllUsersIncludingArchivedUsers:(_Bool)arg1 additionalPredicate:(id)arg2;
+ (void)allUsersOnMainContextWithDataRepository:(id)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)usersWithContext:(id)arg1 dataRepository:(id)arg2 predicate:(id)arg3 limit:(id)arg4 completion:(CDUnknownBlockType)arg5;

@end

