//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSString, UITextView;

@interface ARKIndividualLogViewController : UIViewController
{
    UITextView *_textView;
    NSString *_text;
}

@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(readonly, nonatomic) UITextView *textView; // @synthesize textView=_textView;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (id)initWithLogMessage:(id)arg1;

@end

