//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NFUILolomoViewModelProtocol-Protocol.h"

@class LolomoViewConfig, NFUILolomoEntity, NFUILolomoIdentity, NFUILolomoRequest, NSArray, NSString;

@interface NFUILolomoViewModel : NSObject <NFUILolomoViewModelProtocol>
{
    _Bool _isGallery;
    NSArray *lists;
    LolomoViewConfig *config;
    NFUILolomoIdentity *lolomoIdentity;
    NFUILolomoEntity *entity;
    NSString *_genreId;
    NSString *_lolomoId;
    NSString *_name;
    NSString *_menuName;
    NFUILolomoRequest *_request;
}

@property(retain, nonatomic) NFUILolomoRequest *request; // @synthesize request=_request;
@property(copy, nonatomic) NSString *menuName; // @synthesize menuName=_menuName;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *lolomoId; // @synthesize lolomoId=_lolomoId;
@property(copy, nonatomic) NSString *genreId; // @synthesize genreId=_genreId;
@property(nonatomic) _Bool isGallery; // @synthesize isGallery=_isGallery;
@property(readonly, nonatomic) NFUILolomoEntity *entity; // @synthesize entity;
@property(retain, nonatomic) NFUILolomoIdentity *lolomoIdentity; // @synthesize lolomoIdentity;
@property(retain, nonatomic) LolomoViewConfig *config; // @synthesize config;
@property(retain, nonatomic) NSArray *lists; // @synthesize lists;
- (void).cxx_destruct;
- (void)setGallery:(_Bool)arg1;
- (void)setupName:(id)arg1 menuName:(id)arg2;
- (void)configureLolomoWithLists:(id)arg1 identity:(id)arg2 config:(id)arg3;
- (id)initWithRequest:(id)arg1;

@end

