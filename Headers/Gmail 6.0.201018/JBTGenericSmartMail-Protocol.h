//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JBTSmartMailComponent-Protocol.h"
#import "JavaObject-Protocol.h"

@class JBTSmartMailComponent_Type, JBTSmartMailComponent_ViewMode;
@protocol JBTGenericSmartMailLayout;

@protocol JBTGenericSmartMail <JBTSmartMailComponent, JavaObject>
- (JBTSmartMailComponent_Type *)getOriginalSmartMailType;
- (_Bool)hasLayoutForViewModeWithJBTSmartMailComponent_ViewMode:(JBTSmartMailComponent_ViewMode *)arg1;
- (id <JBTGenericSmartMailLayout>)getLayoutForViewModeWithJBTSmartMailComponent_ViewMode:(JBTSmartMailComponent_ViewMode *)arg1;
@end

