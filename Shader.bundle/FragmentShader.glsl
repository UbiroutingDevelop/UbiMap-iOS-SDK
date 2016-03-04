
precision mediump float;

varying mediump vec4 DestinationColor;
varying highp vec2 TexCoordOut;

uniform mediump float useTexture;
uniform mediump float alpha;
uniform sampler2D Texture;

void main()
{
    mediump vec4 texcolor = texture2D(Texture, TexCoordOut);
    lowp vec4 useT = vec4(useTexture, useTexture, useTexture, useTexture);
    lowp vec4 notUseT = vec4(1.0-useTexture, 1.0-useTexture, 1.0-useTexture, 1.0-useTexture);
    gl_FragColor = DestinationColor * notUseT + texcolor * useT * alpha;
}