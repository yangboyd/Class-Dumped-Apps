//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface DYNMessageContentViewGestureUtils : NSObject
{
}

- (id)userMentionMetadataInTextView:(id)arg1 fromGestureRecognizer:(id)arg2 userMentionAnnotations:(id)arg3;
- (id)attributesForGesture:(id)arg1 textViews:(id)arg2;
- (id)chronosIntentAttributesToHandleTap:(id)arg1 textViews:(id)arg2;
- (_Bool)canChronosIntentHandleTap:(id)arg1 textViews:(id)arg2;
- (_Bool)canHandleUserMentionTapForGesture:(id)arg1 userMentionAnnotations:(id)arg2 textViews:(id)arg3;
- (_Bool)canHandleAvatarOrNameLabelTapForGesture:(id)arg1 messageCreatorType:(unsigned int)arg2 ownerImageView:(id)arg3 ownerLabel:(id)arg4;
- (id)metadataInTextView:(id)arg1 fromGestureRecognizer:(id)arg2 linkInlineAnnotations:(id)arg3;
- (id)URLInTextView:(id)arg1 fromGestureRecognizer:(id)arg2 linkInlineAnnotations:(id)arg3;
- (_Bool)canOpenURLForGesture:(id)arg1 isMessageCVORestricted:(_Bool)arg2 textViews:(id)arg3;
- (long long)characterIndexForLocationOfGesture:(id)arg1 inTextView:(id)arg2;

@end

