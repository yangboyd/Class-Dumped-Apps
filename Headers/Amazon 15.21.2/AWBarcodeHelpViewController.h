//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWSectionedTableViewController.h"

@class NSString;

@interface AWBarcodeHelpViewController : AWSectionedTableViewController
{
    NSString *backTitle;
    CDUnknownBlockType _completionBlock;
}

+ (id)barcodeHelpViewControllerWithBackButtonTitle:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
- (void).cxx_destruct;
- (void)applicationDidEnterBackground;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithBackButtonTitle:(id)arg1;
- (void)done;
- (id)initWithCompletionBlock:(CDUnknownBlockType)arg1;

@end

