//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HMEAssistantSettingsVersionInfo-Protocol.h"

@class ASTSettings, NSString;

@interface HMEAssistantSettingsVersionInfo : NSObject <HMEAssistantSettingsVersionInfo>
{
    ASTSettings *_settings;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) ASTSettings *settings; // @synthesize settings=_settings;
- (void)reset;
- (void)update:(id)arg1;
@property(readonly, nonatomic) NSString *value;
- (id)initWithAccessor:(id)arg1;
- (id)initWithSettings:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

