//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder-Protocol.h"

@class ComGoogleAppsCompanionProtoHeaderInfo_ButtonInfo, ComGoogleAppsCompanionProtoHeaderInfo_DropDownEntry, ComGoogleAppsCompanionProtoHeaderInfo_ViewType, NSString;
@protocol JavaUtilList;

@protocol ComGoogleAppsCompanionProtoHeaderInfoOrBuilder <ComGoogleProtobufMessageOrBuilder>
- (_Bool)getEnableControls;
- (_Bool)hasEnableControls;
- (ComGoogleAppsCompanionProtoHeaderInfo_DropDownEntry *)getDropDownEntriesWithInt:(int)arg1;
- (id <JavaUtilList>)getDropDownEntriesList;
- (int)getDropDownEntriesCount;
- (_Bool)getSubtitleIsButton;
- (_Bool)hasSubtitleIsButton;
- (_Bool)getCallOutSubtitle;
- (_Bool)hasCallOutSubtitle;
- (NSString *)getSubtitle;
- (_Bool)hasSubtitle;
- (ComGoogleAppsCompanionProtoHeaderInfo_ButtonInfo *)getButtonInfo;
- (_Bool)hasButtonInfo;
- (ComGoogleAppsCompanionProtoHeaderInfo_ViewType *)getViewType;
- (_Bool)hasViewType;
@end

