//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface SPTSearchRecentsItem : NSObject
{
    _Bool _explicitContent;
    NSURL *_originURI;
    NSURL *_targetURI;
    NSString *_title;
    NSString *_subtitle;
    NSURL *_imageURI;
    NSString *_placeholderIconIdentifier;
}

@property(readonly, nonatomic, getter=isExplicitContent) _Bool explicitContent; // @synthesize explicitContent=_explicitContent;
@property(readonly, copy, nonatomic) NSString *placeholderIconIdentifier; // @synthesize placeholderIconIdentifier=_placeholderIconIdentifier;
@property(readonly, copy, nonatomic) NSURL *imageURI; // @synthesize imageURI=_imageURI;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSURL *targetURI; // @synthesize targetURI=_targetURI;
@property(readonly, copy, nonatomic) NSURL *originURI; // @synthesize originURI=_originURI;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToRecentsItem:(id)arg1;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithOriginURI:(id)arg1 componentModel:(id)arg2;
- (id)initWithOriginURI:(id)arg1 targetURI:(id)arg2 title:(id)arg3 subtitle:(id)arg4 imageURI:(id)arg5 placeholderIconIdentifier:(id)arg6 explicitContent:(_Bool)arg7;

@end

