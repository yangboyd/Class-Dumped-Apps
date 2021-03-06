//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class IGCoreTextView, IGStyledString, NSURL;
@protocol IGCoreTextLinkHandler;

@interface IGCommentCaptionSocialContextView : UIView
{
    IGCoreTextView *_coreTextView;
    IGStyledString *_styledString;
    id <IGCoreTextLinkHandler> _linkHandler;
    NSURL *_destinationURL;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSURL *destinationURL; // @synthesize destinationURL=_destinationURL;
@property(nonatomic) __weak id <IGCoreTextLinkHandler> linkHandler; // @synthesize linkHandler=_linkHandler;
@property(retain, nonatomic) IGStyledString *styledString; // @synthesize styledString=_styledString;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (double)heightForWidth:(double)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

