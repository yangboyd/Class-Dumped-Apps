//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTSlateContentUnitDelegate-Protocol.h"

@protocol SPTSlate, SPTSlateWireframe;

@protocol SPTSlateManager <SPTSlateContentUnitDelegate>
@property(readonly, nonatomic) id <SPTSlateWireframe> wireframe;
@property(readonly, nonatomic) id <SPTSlate> presentedSlate;
- (void)dismissSlate:(id <SPTSlate>)arg1 animated:(_Bool)arg2;
- (void)presentSlate:(id <SPTSlate>)arg1 animated:(_Bool)arg2;
@end

