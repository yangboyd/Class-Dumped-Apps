//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JBTClickableAction-Protocol.h"
#import "JBTSmartMailAction-Protocol.h"
#import "JavaObject-Protocol.h"

@class JBTGoTo_IconType, JBTGoTo_Source, JBTGoTo_UserLocationType, NSString;
@protocol JBTSmartMailComponentContext;

@protocol JBTGoTo <JBTSmartMailAction, JBTClickableAction, JavaObject>
- (JBTGoTo_UserLocationType *)getUserLocationType;
- (JBTGoTo_Source *)getSource;
- (id <JBTSmartMailComponentContext>)getContext;
- (_Bool)hasUserLocationType;
- (_Bool)canMarkAsClicked;
- (NSString *)getDetail;
- (_Bool)hasDetail;
- (NSString *)getText;
- (_Bool)isClicked;
- (_Bool)isAmpUrl;
- (NSString *)getGoToUrl;
- (JBTGoTo_IconType *)getIconType;
@end

