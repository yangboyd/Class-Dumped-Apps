//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleAppsBigtopDataItemsDraftsClientLabelHelper.h"

@class ComGoogleCommonCollectImmutableSet;

@interface ComGoogleAppsBigtopDataItemsDraftsAutoValue_ClientLabelHelper : ComGoogleAppsBigtopDataItemsDraftsClientLabelHelper
{
    _Bool isPinned_;
    _Bool isSentToMe_;
    _Bool isSentAndArchived_;
    _Bool isSave_;
    _Bool isResponse_;
    _Bool isLockerMessage_;
    _Bool cancelSendSupported_;
    _Bool isScheduledSend_;
    _Bool shouldUnsnoozeOnSend_;
    ComGoogleCommonCollectImmutableSet *additionalLabelIds_;
}

- (void)dealloc;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)additionalLabelIds;
- (_Bool)shouldUnsnoozeOnSend;
- (_Bool)isScheduledSend;
- (_Bool)cancelSendSupported;
- (_Bool)isLockerMessage;
- (_Bool)isResponse;
- (_Bool)isSave;
- (_Bool)isSentAndArchived;
- (_Bool)isSentToMe;
- (_Bool)isPinned;

@end

