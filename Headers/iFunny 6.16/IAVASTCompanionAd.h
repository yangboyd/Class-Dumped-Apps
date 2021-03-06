//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Funny/IAInterfaceBuilder-Protocol.h>
#import <Funny/IAVASTCompanionAdBuilder-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSString, NSURL, UIImage;

@interface IAVASTCompanionAd : NSObject <IAInterfaceBuilder, IAVASTCompanionAdBuilder>
{
    int _width;
    int _height;
    NSString *_id_;
    NSString *_resourceTypeString;
    NSString *_creativeType;
    NSString *_altText;
    NSURL *_clickThroughURL;
    NSMutableArray *_clickTrackingURLsAsStrings;
    NSURL *_URL;
    NSString *_htmlString;
    NSMutableDictionary *_trackingEvents;
    long long _resourceType;
    UIImage *_companionImage;
}

+ (void)ddSetLogLevel:(unsigned long long)arg1;
+ (unsigned long long)ddLogLevel;
+ (id)build:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) UIImage *companionImage; // @synthesize companionImage=_companionImage;
@property(readonly, nonatomic) long long resourceType; // @synthesize resourceType=_resourceType;
@property(retain, nonatomic) NSMutableDictionary *trackingEvents; // @synthesize trackingEvents=_trackingEvents;
@property(copy, nonatomic) NSString *htmlString; // @synthesize htmlString=_htmlString;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(retain, nonatomic) NSMutableArray *clickTrackingURLsAsStrings; // @synthesize clickTrackingURLsAsStrings=_clickTrackingURLsAsStrings;
@property(retain, nonatomic) NSURL *clickThroughURL; // @synthesize clickThroughURL=_clickThroughURL;
@property(copy, nonatomic) NSString *altText; // @synthesize altText=_altText;
@property(copy, nonatomic) NSString *creativeType; // @synthesize creativeType=_creativeType;
@property(copy, nonatomic) NSString *resourceTypeString; // @synthesize resourceTypeString=_resourceTypeString;
@property(nonatomic) int height; // @synthesize height=_height;
@property(nonatomic) int width; // @synthesize width=_width;
@property(copy, nonatomic) NSString *id_; // @synthesize id_=_id_;
- (void)dealloc;
@property(readonly, copy) NSString *description;
- (id)baseCompanionAdDescription;
- (void)initResourceTypeFromString;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

