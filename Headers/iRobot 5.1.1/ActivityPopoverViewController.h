//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AspenUIComponents/BasePopoverViewController.h>

@class NSString, UIImage, UIImageView, UILabel;

@interface ActivityPopoverViewController : BasePopoverViewController
{
    CDUnknownBlockType _dismissHandler;
    NSString *_statusText;
    UIImage *_statusImage;
    UILabel *_statusLabel;
    UIImageView *_statusImageView;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIImageView *statusImageView; // @synthesize statusImageView=_statusImageView;
@property(nonatomic) __weak UILabel *statusLabel; // @synthesize statusLabel=_statusLabel;
@property(retain, nonatomic) UIImage *statusImage; // @synthesize statusImage=_statusImage;
@property(retain, nonatomic) NSString *statusText; // @synthesize statusText=_statusText;
@property(copy, nonatomic) CDUnknownBlockType dismissHandler; // @synthesize dismissHandler=_dismissHandler;
- (void)viewDidLoad;

@end

