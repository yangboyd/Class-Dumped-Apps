//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;
@protocol HMEChooseStructureCoordinator;

@protocol HMEChooseStructureCoordinatorDelegate <NSObject>
- (void)chooseStructureCoordinatorShouldShowZeroStructure:(id <HMEChooseStructureCoordinator>)arg1;
- (void)chooseStructureCoordinatorShouldExit:(id <HMEChooseStructureCoordinator>)arg1;
- (void)structureCoordinator:(id <HMEChooseStructureCoordinator>)arg1 didAcceptInvitationForStructureWithID:(NSString *)arg2;
- (void)structureCoordinator:(id <HMEChooseStructureCoordinator>)arg1 didChooseStructureID:(NSString *)arg2;
@end

