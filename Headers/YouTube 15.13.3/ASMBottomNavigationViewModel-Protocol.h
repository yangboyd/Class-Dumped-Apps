//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/ASMResourceBasedModel-Protocol.h>

@class ASMObservable, ASMResourceKey, ASMViewBlueprint;

@protocol ASMBottomNavigationViewModel <ASMResourceBasedModel>
@property(readonly, nonatomic) ASMResourceKey *currentScreenKey;
@property(readonly, nonatomic) ASMObservable *currentIdentity;
@property(readonly, nonatomic) ASMObservable *bottomNavigationButtons;
- (ASMViewBlueprint *)createBlueprintForCurrentRootKeyAndLoadScreen;
- (void)clearDismissedPromptItemIDsForCurrentUser;
- (void)logOutboundNavigationToDestination:(ASMResourceKey *)arg1;
- (void)logNavigationToUnknownTargetFromBackButton;
- (void)logNavigationToUnknownTarget;
- (void)logOpeningMenu;
- (ASMObservable *)resourceForKey:(ASMResourceKey *)arg1;
- (void)navigateToScreenWithKey:(ASMResourceKey *)arg1 withNavigationOrigin:(unsigned long long)arg2;
@end

