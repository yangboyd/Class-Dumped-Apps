//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ICEWebViewPrimitive.h"

#import "ICEMutablePrimitive-Protocol.h"

@class ICEAccessibility, ICEBehavior, ICEStyle, ICEVisualElementLogInfo, NSArray, NSString, NSURL;

@interface ICEMutableWebViewPrimitive : ICEWebViewPrimitive <ICEMutablePrimitive>
{
}


// Remaining properties
@property(copy, nonatomic) NSString *HTMLString; // @dynamic HTMLString;
@property(copy, nonatomic) NSString *UID;
@property(copy, nonatomic) ICEAccessibility *accessibility;
@property(retain, nonatomic) NSURL *baseURL; // @dynamic baseURL;
@property(copy, nonatomic) ICEBehavior *behavior;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) float fitContentHeightPriority; // @dynamic fitContentHeightPriority;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSArray *layoutConstraints;
@property(copy, nonatomic) NSArray *layoutGuideUIDs;
@property(copy, nonatomic) ICEVisualElementLogInfo *logInfo;
@property(copy, nonatomic) ICEStyle *style;
@property(readonly) Class superclass;
@end

