//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SCUserSession;
@protocol OS_dispatch_group;

@interface SCGeofilterDependencyFetcher : NSObject
{
    _Bool _hasErrors;
    NSString *_domain;
    SCUserSession *_userSession;
    NSObject<OS_dispatch_group> *_dispatchGroup;
}

@property(retain, nonatomic) NSObject<OS_dispatch_group> *dispatchGroup; // @synthesize dispatchGroup=_dispatchGroup;
@property(retain, nonatomic) SCUserSession *userSession; // @synthesize userSession=_userSession;
@property(nonatomic) _Bool hasErrors; // @synthesize hasErrors=_hasErrors;
@property(retain, nonatomic) NSString *domain; // @synthesize domain=_domain;
- (void).cxx_destruct;
- (void)setGroupCompletionHandler:(CDUnknownBlockType)arg1;
- (void)fetchURLImage:(id)arg1 itemCompletion:(CDUnknownBlockType)arg2;
- (void)fetchURLData:(id)arg1 itemCompletion:(CDUnknownBlockType)arg2;
- (id)initWithDomain:(id)arg1 userSession:(id)arg2;

@end

