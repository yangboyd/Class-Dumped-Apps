//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWECrotocol-Protocol.h"

@class AWEAwemeModel, UIView;

@protocol AWEAdFormOperationGuideViewController <AWECrotocol>
@property(copy, nonatomic) CDUnknownBlockType dismissBlock;
@property(nonatomic) _Bool shouldCloseFormOperation;
@property(nonatomic) _Bool formSubmitSuccess;
@property(nonatomic) _Bool loadSuccess;
- (void)showFromView:(UIView *)arg1 model:(AWEAwemeModel *)arg2;
- (void)preLoadCSS;
@end

