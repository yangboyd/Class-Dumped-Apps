//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GMPCAnnotationRankingOptions, GMSModelStyle, GMSModelStyleIcon, GMSx_GMPCAnimation;

@interface GMSModelStyleBuilder : NSObject
{
    vector_12da65de _fillColors;
    // Error parsing type: {TextBoxStyle="fill_color_"I"stroke_"{Stroke="color_"I"end_color_"I"width_eighths_"S"dashes_"{vector<short, std::__1::allocator<short> >="__begin_"^s"__end_"^s"__end_cap_"{__compressed_pair<short *, std::__1::allocator<short> >="__value_"^s}}"width_"f"orthogonal_offset_eighths_"i"texture_url_"{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >="__r_"{__compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> >="__value_"{__rep=""(?="__l"{__long="__data_"*"__size_"Q"__cap_"Q}"__s"{__short="__data_"[23c]""{?="__size_"C}}"__r"{__raw="__words"[3Q]})}}}"start_cap_url_"{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >="__r_"{__compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> >="__value_"{__rep=""(?="__l"{__long="__data_"*"__size_"Q"__cap_"Q}"__s"{__short="__data_"[23c]""{?="__size_"C}}"__r"{__raw="__words"[3Q]})}}}"end_cap_url_"{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >="__r_"{__compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> >="__value_"{__rep=""(?="__l"{__long="__data_"*"__size_"Q"__cap_"Q}"__s"{__short="__data_"[23c]""{?="__size_"C}}"__r"{__raw="__words"[3Q]})}}}"animation_duration_"f}"box_icon_"@"GMSModelStyleIcon""padding_"{Vector2f="vector_"}"shape_"i"corner_radius_"f"drop_shadow_offset_"{Vector2f="vector_"}"drop_shadow_blur_radius_"f"drop_shadow_color_"I"supported_anchor_points_"{vector<gmscore::model::Alignment, std::__1::allocator<gmscore::model::Alignment> >="__begin_"^{Alignment}"__end_"^{Alignment}"__end_cap_"{__compressed_pair<gmscore::model::Alignment *, std::__1::allocator<gmscore::model::Alignment> >="__value_"^{Alignment}}}"caret_height_"f"caret_height_corner_"f"caret_corner_offset_distance_"f}, name: _textBoxStyle
    vector_05d103ca _strokes;
    unsigned char _componentFlags;
    unsigned char _offBits;
    struct Alignment _primaryGroupAnchorAlignment;
    int _tileZoom;
    int _zPlane;
    int _anchorOffsetX;
    int _anchorOffsetY;
    int _interGroupPadding;
    int _annotationDirective;
    int _maxAnnotationCount;
    GMSModelStyleIcon *_icon;
    long long _projection;
    GMPCAnnotationRankingOptions *_annotationRankingOptions;
    GMSx_GMPCAnimation *_animation;
    struct TextStyle _textStyle;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(retain, nonatomic) GMSx_GMPCAnimation *animation; // @synthesize animation=_animation;
@property(nonatomic) int maxAnnotationCount; // @synthesize maxAnnotationCount=_maxAnnotationCount;
@property(nonatomic) int annotationDirective; // @synthesize annotationDirective=_annotationDirective;
@property(retain, nonatomic) GMPCAnnotationRankingOptions *annotationRankingOptions; // @synthesize annotationRankingOptions=_annotationRankingOptions;
@property(nonatomic) int interGroupPadding; // @synthesize interGroupPadding=_interGroupPadding;
@property(nonatomic) int anchorOffsetY; // @synthesize anchorOffsetY=_anchorOffsetY;
@property(nonatomic) int anchorOffsetX; // @synthesize anchorOffsetX=_anchorOffsetX;
@property(nonatomic) struct Alignment primaryGroupAnchorAlignment; // @synthesize primaryGroupAnchorAlignment=_primaryGroupAnchorAlignment;
@property(nonatomic) long long projection; // @synthesize projection=_projection;
@property(nonatomic) int zPlane; // @synthesize zPlane=_zPlane;
@property(retain, nonatomic) GMSModelStyleIcon *icon; // @synthesize icon=_icon;
@property(nonatomic) struct TextBoxStyle *textBoxStyle; // @synthesize textBoxStyle=_textBoxStyle;
@property(nonatomic) struct TextStyle textStyle; // @synthesize textStyle=_textStyle;
@property(nonatomic) vector_05d103ca *strokes; // @synthesize strokes=_strokes;
@property(nonatomic) vector_12da65de *fillColors; // @synthesize fillColors=_fillColors;
@property(nonatomic) int tileZoom; // @synthesize tileZoom=_tileZoom;
@property(nonatomic) unsigned char offBits; // @synthesize offBits=_offBits;
@property(nonatomic) unsigned char componentFlags; // @synthesize componentFlags=_componentFlags;
@property(readonly, nonatomic) GMSModelStyle *style;
- (id)init;

@end

