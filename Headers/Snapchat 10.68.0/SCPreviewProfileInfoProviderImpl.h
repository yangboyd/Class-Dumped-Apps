//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCPreviewProfileInfoProvider-Protocol.h"

@class NSString, SCUserSession;

@interface SCPreviewProfileInfoProviderImpl : NSObject <SCPreviewProfileInfoProvider>
{
    SCUserSession *_userSession;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *username;
@property(readonly, nonatomic) NSString *displayName;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

