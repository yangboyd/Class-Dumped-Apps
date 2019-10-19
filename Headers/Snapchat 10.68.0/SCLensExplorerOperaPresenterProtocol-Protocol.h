//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, SCLensExplorerChallengesSnap, SCLensExplorerStoryPlayerContext, UIView, UIViewController;
@protocol SCLensExplorerOperaPresenterProtocolPresenterDelegateProtocol, SCPageNameLogging;

@protocol SCLensExplorerOperaPresenterProtocol <NSObject>
@property(nonatomic) __weak id <SCLensExplorerOperaPresenterProtocolPresenterDelegateProtocol> delegate;
- (void)presentWithInitialChallengeSnap:(SCLensExplorerChallengesSnap *)arg1 baseView:(UIView *)arg2 allStories:(NSArray *)arg3 presentingViewController:(UIViewController<SCPageNameLogging> *)arg4 context:(SCLensExplorerStoryPlayerContext *)arg5;
- (void)resumeOpera;
- (void)pauseOpera;
- (void)dismissWithAnimation:(_Bool)arg1;
- (_Bool)isPresenting;
- (void)updateBaseView:(UIView *)arg1;
- (void)cancelPresentingIfNecessary;
@end

