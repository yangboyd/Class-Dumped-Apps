//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UJET/UjetBasePopupViewController.h>

@class NSString, UjetScheduleResultPopupViewModel;

@interface UjetScheduleResultPopupViewController : UjetBasePopupViewController
{
    unsigned long long _result;
    UjetScheduleResultPopupViewModel *_viewModel;
    NSString *_scheduledTime;
    CDUnknownBlockType _completion;
}

@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) NSString *scheduledTime; // @synthesize scheduledTime=_scheduledTime;
- (void).cxx_destruct;
- (void)primaryButtonDidTap;
- (void)viewDidLoad;
- (id)initWithScheduleResult:(unsigned long long)arg1;

@end

