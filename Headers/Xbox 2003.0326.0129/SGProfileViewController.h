//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SGTabContainerController.h"

@class NSString;

@interface SGProfileViewController : SGTabContainerController
{
}

- (id)myViewModel;
@property(readonly, nonatomic) NSString *xuid;
- (void)onViewModelTabControlColorChanged;
- (void)onViewModelTabHeaderColorChanged;
- (void)onDestroy;
- (void)onNavigatedFrom:(id)arg1 andCompleteBlock:(CDUnknownBlockType)arg2;
- (void)onNavigatedTo:(id)arg1 andCompleteBlock:(CDUnknownBlockType)arg2;
- (void)onInitialize;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

