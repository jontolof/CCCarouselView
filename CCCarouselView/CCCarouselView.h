//
//  CCCarouselView.h
//  CCCarouselView
//
//  Created by Jont Olof Lyttkens on 2011-08-29.
//  Copyright 2011 Mobile Strategist and iOS Developer. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CCCarouselViewCell.h"

@interface CCCarouselView : UIScrollView 
<
CCCarouselViewCellDelegate
>
{
    
}
- (CCCarouselViewCell *)dequeueReusableCell;
@end
