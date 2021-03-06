//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSIndexPath, NSString, SLKDependencies, SLKGenericChannelPickerController, SLKGenericPickerCellViewModel;

@protocol SLKGenericChannelPickerRowActionable <NSObject>
- (void)executeRowActionInViewController:(SLKGenericChannelPickerController *)arg1 atIndexPath:(NSIndexPath *)arg2 withViewModel:(SLKGenericPickerCellViewModel *)arg3 dependencies:(SLKDependencies *)arg4;

@optional
- (void)executeChannelCreation:(SLKGenericChannelPickerController *)arg1 channelId:(NSString *)arg2 dependencies:(SLKDependencies *)arg3;
@end

