//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IGFeedItemDetailsConfiguration, IGSlideshowLogger, IGUserSession, NSMutableArray, NSString;
@protocol IGFeedConfigurationType, IGFeedItemConfigurationType, IGFeedItemLoggerCreator, IGFeedItemSlideshowViewControllerDelegate, IGSlideshowConfigurationType, IGSlideshowGestureHandler;

@interface IGSlideshowViewControllerProvider : NSObject
{
    NSMutableArray *_viewControllerCache;
    IGUserSession *_userSession;
    id <IGSlideshowConfigurationType> _slideshowConfiguration;
    id <IGFeedItemConfigurationType> _feedItemConfiguration;
    id <IGFeedConfigurationType> _feedConfiguration;
    id <IGFeedItemLoggerCreator> _feedItemLoggerCreator;
    IGSlideshowLogger *_logger;
    id <IGFeedItemSlideshowViewControllerDelegate> _viewControllerDelegate;
    id <IGSlideshowGestureHandler> _gestureHandler;
    NSString *_analyticsModule;
    struct UIEdgeInsets _contentInset;
    IGFeedItemDetailsConfiguration *_feedItemDetailsConfiguration;
}

- (void).cxx_destruct;
- (void)recycleViewController:(id)arg1;
- (id)dequeueViewController;
- (void)_handleDidReceiveMemoryWarning:(id)arg1;
- (id)initWithUserSession:(id)arg1 slideshowConfiguration:(id)arg2 feedItemConfiguration:(id)arg3 feedConfiguration:(id)arg4 feedItemDetailsConfiguration:(id)arg5 contentInset:(struct UIEdgeInsets)arg6 feedItemLoggerCreator:(id)arg7 viewControllerDelegate:(id)arg8 logger:(id)arg9 gestureHandler:(id)arg10 analyticsModule:(id)arg11;

@end

