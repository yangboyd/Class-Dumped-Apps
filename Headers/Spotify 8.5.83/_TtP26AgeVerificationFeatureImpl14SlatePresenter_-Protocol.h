//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSError, NSURL, UIColor;
@protocol _TtP26AgeVerificationFeatureImpl22SlatePresenterDelegate_;

@protocol _TtP26AgeVerificationFeatureImpl14SlatePresenter_
- (void)dismiss;
- (void)updateWithError:(NSError *)arg1 animating:(_Bool)arg2;
- (void)updateWithCoverArtURL:(NSURL *)arg1;
- (void)updateWithColor:(UIColor *)arg1;
- (void)presentFor:(NSURL *)arg1;
@property(nonatomic) __weak id <_TtP26AgeVerificationFeatureImpl22SlatePresenterDelegate_> delegate;
@end

