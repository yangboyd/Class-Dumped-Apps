//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/KFECSUpdatingProtocol-Protocol.h>

@class KFECSToolbox, NSMutableArray, NSString;

@interface KFSystemManager : NSObject <KFECSUpdatingProtocol>
{
    NSMutableArray *_systems;
    KFECSToolbox *_toolbox;
}

- (void).cxx_destruct;
@property(retain, nonatomic) KFECSToolbox *toolbox; // @synthesize toolbox=_toolbox;
- (void)renderWithToolbox:(id)arg1 pass:(unsigned long long)arg2;
- (void)updateWithToolbox:(id)arg1 pass:(unsigned long long)arg2;
- (void)setupWithToolbox:(id)arg1 pass:(unsigned long long)arg2;
- (void)constructWithToolbox:(id)arg1 pass:(unsigned long long)arg2;
- (void)mutateWithToolbox:(id)arg1 pass:(unsigned long long)arg2;
- (void)removeSystem:(id)arg1;
- (void)addSystem:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

