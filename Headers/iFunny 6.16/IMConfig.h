//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/IMJSONModel.h>

#import <Funny/IMConfig-Protocol.h>

@class NSMutableDictionary, NSString;

@interface IMConfig : IMJSONModel <IMConfig>
{
    NSMutableDictionary *_includeIds;
}

@property(retain, nonatomic) NSMutableDictionary *includeIds; // @synthesize includeIds=_includeIds;
- (void).cxx_destruct;
- (id)getDefaultComponentConfig;
@property(readonly) unsigned long long hash;
- (_Bool)isValid;
- (id)getType;
- (_Bool)updatefromDictionary:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)newInstance;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

