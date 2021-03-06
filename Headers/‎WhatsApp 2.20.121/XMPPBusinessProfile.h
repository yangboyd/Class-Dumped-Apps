//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, XMPPBusinessCoordinates, XMPPBusinessHours, XMPPBusinessProfileOptions, XMPPBusinessStructuredAddress, XMPPBusinessVertical;

@interface XMPPBusinessProfile : NSObject
{
    _Bool _hasProductCatalog;
    long long _tag;
    XMPPBusinessCoordinates *_coordinates;
    NSString *_address;
    XMPPBusinessStructuredAddress *_structuredAddress;
    NSString *_businessDescription;
    NSArray *_categories;
    XMPPBusinessVertical *_vertical;
    NSString *_email;
    NSArray *_websites;
    XMPPBusinessHours *_hours;
    XMPPBusinessProfileOptions *_profileOptions;
}

+ (id)profileFromBusinessProfileElement:(id)arg1;
+ (_Bool)canCreateBusinessProfileFromElement:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) XMPPBusinessProfileOptions *profileOptions; // @synthesize profileOptions=_profileOptions;
@property(readonly, nonatomic) _Bool hasProductCatalog; // @synthesize hasProductCatalog=_hasProductCatalog;
@property(readonly, nonatomic) XMPPBusinessHours *hours; // @synthesize hours=_hours;
@property(readonly, copy, nonatomic) NSArray *websites; // @synthesize websites=_websites;
@property(readonly, copy, nonatomic) NSString *email; // @synthesize email=_email;
@property(readonly, nonatomic) XMPPBusinessVertical *vertical; // @synthesize vertical=_vertical;
@property(readonly, copy, nonatomic) NSArray *categories; // @synthesize categories=_categories;
@property(readonly, copy, nonatomic) NSString *businessDescription; // @synthesize businessDescription=_businessDescription;
@property(readonly, nonatomic) XMPPBusinessStructuredAddress *structuredAddress; // @synthesize structuredAddress=_structuredAddress;
@property(readonly, copy, nonatomic) NSString *address; // @synthesize address=_address;
@property(readonly, nonatomic) XMPPBusinessCoordinates *coordinates; // @synthesize coordinates=_coordinates;
@property(readonly, nonatomic) long long tag; // @synthesize tag=_tag;
- (id)initWithTag:(long long)arg1 coordinates:(id)arg2 address:(id)arg3 structuredAddress:(id)arg4 description:(id)arg5 categories:(id)arg6 vertical:(id)arg7 email:(id)arg8 websites:(id)arg9 hours:(id)arg10 hasProductCatalog:(_Bool)arg11 profileOptions:(id)arg12;
- (id)initWithBusinessProfileElement:(id)arg1;

@end

